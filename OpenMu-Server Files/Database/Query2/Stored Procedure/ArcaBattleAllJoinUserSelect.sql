USE [MuOnline]
GO


SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO


CREATE   PROC [dbo].[ArcaBattleAllJoinUserSelect]
AS  
SET NOCOUNT ON
SET TRANSACTION ISOLATION LEVEL READ UNCOMMITTED

BEGIN
	SELECT G_Name, Number, CharName
	FROM	dbo.ARCA_BATTLE_MEMBER_JOIN_INFO
END

SET XACT_ABORT OFF  
SET NOCOUNT OFF





GO

